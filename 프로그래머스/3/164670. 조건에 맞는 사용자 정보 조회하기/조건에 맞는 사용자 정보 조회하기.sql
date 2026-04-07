SELECT
    U.USER_ID,
    U.NICKNAME,
    -- 2. 문자열 함수를 사용하여 최종 출력 형식 가공
    -- CONCAT을 이용해 문자열을 하나의 문장으로 합침
    CONCAT(U.CITY, ' ', U.STREET_ADDRESS1, ' ', U.STREET_ADDRESS2) AS '전체주소',
    -- LEFT, SUBSTRING, RIGHT를 이용해 문자열 슬라이싱
    CONCAT(LEFT(U.TLNO, 3), '-', SUBSTRING(U.TLNO, 4, 4), '-', RIGHT(U.TLNO, 4)) AS '전화번호'
FROM USED_GOODS_USER U
JOIN USED_GOODS_BOARD B ON U.USER_ID = B.WRITER_ID
GROUP BY U.USER_ID
-- 1. 묶인 그룹 중에서 게시글 수가 3개 이상인 그룹만 필터링 (GROUP BY 전용 조건)
HAVING COUNT(B.BOARD_ID) >= 3
ORDER BY U.USER_ID DESC;