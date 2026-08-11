# Write your MySQL query statement below
SELECT c.name from Customer c where c.referee_id != 2 or c.referee_id is null;
