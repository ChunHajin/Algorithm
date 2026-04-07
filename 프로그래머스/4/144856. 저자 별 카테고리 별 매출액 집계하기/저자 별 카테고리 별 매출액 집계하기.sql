SELECT
    A.AUTHOR_ID,
    A.AUTHOR_NAME,
    B.CATEGORY,
    -- 4. (판매량 * 가격)을 계산하여 그룹별 총합(매출액)을 구함
    SUM(S.SALES * B.PRICE) AS TOTAL_SALES
FROM BOOK B
-- 1. 세 개의 테이블을 각각의 ID를 기준으로 연결(JOIN)
JOIN AUTHOR A ON B.AUTHOR_ID = A.AUTHOR_ID
JOIN BOOK_SALES S ON B.BOOK_ID = S.BOOK_ID
-- 2. 2022년 1월 판매 데이터만 추출
WHERE DATE_FORMAT(S.SALES_DATE, '%Y-%m') = '2022-01'
-- 3. (저자, 카테고리) 세트가 똑같은 애들끼리 GROUP BY
-- 여기에서 바로 데이터의 압축이 일어나는 것이 아니라, 분류 기준을 설정해주는 것
-- 때문에 SELECT 절의 SUM()에서 계산이 가능해지는 것
GROUP BY A.AUTHOR_ID, B.CATEGORY
ORDER BY A.AUTHOR_ID ASC, B.CATEGORY DESC;