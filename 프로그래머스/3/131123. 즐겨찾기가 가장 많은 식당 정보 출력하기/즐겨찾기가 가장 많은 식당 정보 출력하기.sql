SELECT
    FOOD_TYPE,
    REST_ID,
    REST_NAME,
    FAVORITES
FROM REST_INFO
-- 2. 메인 쿼리: 서브쿼리에서 뽑은 '음식종류별 최고 점수'와 일치하는 식당만 필터링
-- WHERE IN으로 리스트 안에 포함된 데이터만 필터링
-- (단순 GROUP BY만 쓰면 식당 이름과 점수가 일치하지 않는 문제를 해결하기 위함)
-- (서브쿼리의 결과가 딱 한 줄일 때는 '=' 기호 사용)
WHERE (FOOD_TYPE, FAVORITES) IN (
    -- 1. 서브쿼리: 음식 종류별로 가장 높은 즐겨찾기 점수를 먼저 찾음
    -- FOOD_TYPE으로 GROUP BY 한 뒤 MAX를 써서 각 종류별 최댓값 SELECT
    SELECT FOOD_TYPE, MAX(FAVORITES)
    FROM REST_INFO
    GROUP BY FOOD_TYPE
)
ORDER BY FOOD_TYPE DESC;