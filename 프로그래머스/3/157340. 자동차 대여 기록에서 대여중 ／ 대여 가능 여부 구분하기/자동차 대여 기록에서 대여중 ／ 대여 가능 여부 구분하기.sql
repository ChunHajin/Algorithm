SELECT
    CAR_ID,
    CASE
        -- 2. 해당 자동차 ID가 '대여 중인 명단'에 하나라도 포함되면 '대여중' 처리
        WHEN CAR_ID IN (
            -- 1. 서브쿼리: 2022-10-16 기준 대여 중인 자동차 ID 리스트를 먼저 추출
            SELECT CAR_ID
            FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
            WHERE '2022-10-16' BETWEEN START_DATE AND END_DATE
        ) THEN '대여중'
        ELSE '대여 가능'
    END AS AVAILABILITY
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
-- 3. 자동차 ID별로 그룹화하여 자동차당 하나의 상태만 표시
GROUP BY CAR_ID
ORDER BY CAR_ID DESC;