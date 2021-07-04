**Extra materials**
~~~~SQL

-- casting
SELECT CAST(123 AS DECIMAL (5 , 2 ));
SELECT CAST( PI() AS FLOAT);
SELECT FLOOR( PI());

-- Substring
SELECT SUBSTRING('Hello', 1, 2);-- returns 'He'
SELECT SUBSTRING('Hello', 3, 3);-- returns 'llo'

SELECT
    fname, SUBSTRING(lname, 1, 2) AS lname
FROM
    employees;

SELECT LEFT('Hello', 2);-- return He
SELECT RIGHT('Hello', 2);-- return lo

SELECT
    SUBSTR(fname, 1, 2)
FROM
    employees;

SELECT
    SUBSTR(lname, LENGTH(lname) - 1, 2)
FROM
    employees;

SELECT
    REVERSE(lname)
FROM
    employees;

SELECT
    REPLACE(lname, 'King', 'prince')
FROM
    employees;

-- select column with same table name
SELECT
    id, `tmp`
FROM
    tmp;

-- Skipping then taking some results
SELECT
    lname
FROM
    employees
LIMIT 5 , 5;-- offset, limit
~~~~
