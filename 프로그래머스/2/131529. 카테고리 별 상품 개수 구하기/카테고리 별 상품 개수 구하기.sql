-- 코드를 입력하세요
SELECT
    LEFT(PRODUCT_CODE, 2) AS CATEGORY, -- 문자열 슬라이스 (앞 2글자)
    COUNT(PRODUCT_ID) AS PRODUCTS
FROM PRODUCT
-- GROUP BY에서 SELECT의 별칭 CATEGORY를 쓸 수 있는 이유
-- 쿼리가 시작되기 전에 전체 문장을 훑는 MySQL의 최적화 과정 덕분
-- Oracle, PostgreSQL에서는 에러 발생, 별칭 사용 불가
GROUP BY CATEGORY
-- ORDER BY는 SELECT 절보다 늦게 실행되므로 별칭 사용 가능
ORDER BY CATEGORY ASC;