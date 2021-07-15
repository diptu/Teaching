### <span style="color:tomato"> *LAB-Week 04 (Part A)*</span>
**<code><b>Activity 01:</b></code>**
Display the highest, lowest, sum, and average salary of all employees. Label the columns Maximum, Minimum, Sum, and Average, respectively. Round your results to the nearest whole
number.
~~~~SQL
SELECT
    ROUND(MAX(salary)) AS Maximum,
    ROUND(MIN(salary)) AS Minimum,
    ROUND(SUM(salary)) AS Sum,
    ROUND(AVG(salary)) AS Average
FROM
    employees
~~~~

**<code><b>Activity 02:</b></code>**
Display the minimum, maximum, sum, and average salary
for each job type.
~~~~SQL
SELECT
    job_id, MAX(salary), MIN(salary), SUM(salary), AVG(salary)
FROM
    employees
GROUP BY job_id
~~~~
### <span style="color:tomato"> *LAB-Week 04 (Part B)*</span>
**<code><b>Activity 01:</b></code>**
Write a query to display the number of people with the same job.
~~~~SQL
SELECT
    job_id, COUNT(*)
FROM
    employees
GROUP BY job_id
~~~~
**<code><b>Activity 02:</b></code>**
Display the manager number and the salary of the lowest paid employee for that manager. Exclude anyone whose manager is not known. Exclude any groups where the minimum salary is $6,000 or less. Sort the output in descending order of salary.
~~~~SQL
SELECT
    manager_id, MIN(salary)
FROM
    employees
WHERE
    manager_id IS NOT NULL
GROUP BY manager_id
HAVING MIN(salary) > 6000
ORDER BY MIN(salary) DESC
~~~~

**<code><b>Home Work:</b></code>**
Write a query to display each department’s name, location, number of employees, and the
average salary for all employees in that department. Label the columns Name, Location,
Number of People, and Salary, respectively. Round the average salary to two decimal places.
~~~~SQL
SELECT
    d.name AS Name,
    l.city AS Location,
    COUNT(*) AS 'Number of People',
    ROUND(AVG(salary), 2) AS Salary
FROM
    employees e
        JOIN
    departments d ON e.dept_id = d.id
        JOIN
    locations l ON d.location_id = l.id
GROUP BY d.id , d.name , l.city
~~~~
### <span style="color:tomato"> *LAB-Week 04 (Part C)*</span>
**<code><b>Activity 01:</b></code>**
Write a query to display the last name and hire date of any employee in the same
department as Zlotkey. Exclude Zlotkey.
~~~~SQL
SELECT
    lname, hire_date
FROM
    employees
WHERE
    dept_id = (SELECT
            dept_id
        FROM
            employees
        WHERE
            lname = 'Zlotkey')
        AND lname <> 'Zlotkey'
~~~~
**<code><b>Activity 02:</b></code>**
Create a query to display the employee numbers and last names of all employees who earn more
than the average salary. Sort the results in ascending order of salary.
~~~~SQL
SELECT
    id, lname, salary
FROM
    employees
WHERE
    salary > (SELECT
            AVG(salary)
        FROM
            employees)
ORDER BY salary
~~~~
### <span style="color:tomato"> *LAB-Week 04 (Part D)*</span>
**<code><b>Activity 01:</b></code>**
Display the last name and salary of every employee who reports to King.
~~~~SQL
SELECT
    lname, salary
FROM
    employees
WHERE
    manager_id = ALL (SELECT
            id
        FROM
            employees
        WHERE
            lname = 'King')
~~~~
**<code><b>Activity 02:</b></code>**
Write a query to display the employee numbers, last names, and salaries of all employees who earn more than the average salary and who work in a department with any employee with a u in their name.
~~~~SQL
SELECT
    id, lname, salary
FROM
    employees
WHERE
    salary > ALL (SELECT
            AVG(salary)
        FROM
            employees)
        AND dept_id IS NOT NULL
        AND lname LIKE '%u%';
~~~~
