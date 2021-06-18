**Database :** Database is a <code>*collection of related data*</code> , generally stored and accessed electronically from a computer system.</br>

<div style="text-align: center"><img src="database.png" width="150" height=150"/></div></br>


**Data :** A collection of <code style="color:black"> *facts and figures*</code> that can be processed to <code style="color:black"> *produce information*</code>.

**Database Management (DBMS) :** Refers to the <code>technology of storing and retrieving user data with utmost efficiency along with appropriate security measures</code>.

**Why Should We Learn DBMS?** DBMS is most important thing in Software Development in most cases <sup>[1]</sup>.

    1. manages data efficiently
    2. allows users to perform multiple tasks with ease.
    3. A database management system stores, organizes and manages a large amount of information within a single software application.

**What is a Relational Database (RDBMS)?**
Type of database that stores and provides access to data points that are related to one another. <code>Relational databases are based on the relational model, an intuitive, straightforward way of representing data in tables. In a relational database, each row in the table is a record with a unique ID called the key.</code> The columns of the table hold attributes of the data, and each record usually has a value for each attribute, making it easy to establish the relationships among data points <sup>[2]</sup>.

**Key Difference between DBMS and RDBMS:**

The key difference is that RDBMS (relational database management system) applications store data in a tabular form, while DBMS applications store data as files <sup>[3]</sup>.

Does that mean there are no tables in a DBMS?

There can be, but there will be no <b>“relation”</b> between the tables, like in a RDBMS.

In DBMS, data is generally stored in either a hierarchical form or a navigational form. This means that a single data unit will have one parent node and zero, one or more children nodes. It may even be stored in a graph form, which can be seen in the network model.

In a RDBMS, the tables will have an identifier called primary key. Data values will be stored in the form of tables. The relationships between these data values will be stored in the form of a table as well. Every value stored in the relational database is accessible. This value can be updated by the system. The data in this system is also physically and logically independent.

You can say that a RDBMS is an extension of a DBMS, even if there are many differences between the two. Most software products in the market today are both DBMS and RDBMS compliant. Essentially, they can maintain databases in a (relational) tabular form as well as a file form, or both. This means that today a RDBMS application is a DBMS application, and vice versa. However, there are still major differences between a relational database system for storing data and a plain database system.

SQL is a language that is used to operate your database. SQL is the basic language used for all the databases. There are minor syntax changes amongst different databases, but the basic SQL syntax remains largely the same. <code>SQL is a short abbreviation of Structured Query Language.</code> According to ANSI (American National Standards Institute), SQL is the standard language to operate a relational database management system.

**What is SQL :**
SQL is used in <code><b>accessing, updating, and manipulation of data in a database. Its design allows for the management of data in an RDBMS, such as MYSQL. SQL language also used for controlling data access and for the creation and modification</b></code> of database schemas <sup>[4]</sup>.


**What is MySQL :**
Developed in the mid-90s., MySQL was one of the first open-source database available in the market. Today there are many alternatives variants of MySQL. However, the differences between the variants are not significant as they use the same syntax, and basic functionality also remains the same.

MySQL is an RDBMS that allows keeping the data that exists in a database organized. MySQL is pronounced as "My S-Q-L," but it is also called "My Sequel." It is named after co-founder Michael Widenius' daughter. MySQL <code>provides multi-user access</code> to databases. This RDBMS system is commonly used with the combination of PHP and Apache Web Server, on top of a Linux distribution. MySQL uses the SQL language to query the database<sup>[4]</sup>.

**What is SQL Server?**
* SQL Server also referred to as MSSQL means Microsoft SQL Server. It was developed by Microsoft. It was initially released in the year 1989. It was written in C and C++. It is available in multi-languages like English, Japanese, French, Spanish, Chinese, etc.

* SQL Server has many editions like Enterprise edition, basic or Standard edition, Web edition, BI, workgroup, and Express edition. SQL Server has many features like the same database can be used by multiple developers. The database table model is used for storing records or information. The syntax is very simple for writing the basic queries like for Insert, create, update and delete, which is also referred to as CRUD statements
* SQL Server provides high scalability as it can be used for small projects as well as large applications. It helps in taking care of millions of transactions per day. It gives better performance and high speed while retrieving the data for the application. SQL Server also used as a service like SSAS, SSRS, SSIS, SSNS. SQL Server has a feature to integrate with a Visual studio for data programming.

**NoSQL DATABASES: NON-RELATIONAL & DISTRIBUTED DATA**
NoSQL databases, on the other hand, have dynamic schemas for unstructured data, and data is stored in many ways: They can be column-oriented, document-oriented, graph-based or organized as a KeyValue store. This flexibility means that:<sup>[5]</sup>

    1. You can create documents without having to first define their structure
    2. Each document can have its own unique structure
    3. The syntax can vary from database to database, and
    4. You can add fields as you go.

**Key Differences between SQL and NoSQL:**
In a relational database system, <code>you must define a schema before adding records to a database.</code> The schema is the structure described in a formal language supported by the database and provides a blueprint for the tables in a database and the relationships between tables of data.<code>Within a table, you need to define constraints in terms of rows and named columns as well as the type of data that can be stored in each column.</code>

In contrast, a document-oriented database contains documents, which are records that describe the data in the document, as well as the actual data. Documents can be as complex as you choose;<code> you can use nested data to provide additional sub-categories of information about your object. You can also use one or more document to represent a real-world object <sup>[5]</sup>.</code>

[[1] Why Should We Learn DBMS?](https://www.quora.com/Why-should-I-study-DBMS)<br>
[[2] What is a Relational Database (RDBMS)?](https://www.oracle.com/database/what-is-a-relational-database/)<br>
[[3] Key Difference between DBMS and RDBMS?](https://stackoverflow.com/questions/18419137/what-is-the-difference-between-dbms-and-rdbms)<br>
[[4] What is the difference between SQL and MySQL or SQL Server?](https://www.quora.com/What-is-the-difference-between-SQL-and-MySQL-or-SQL-Server)<br>
[[5] SQL vs. NoSQL Databases: What’s the Difference?](https://medium.com/@itIsMadhavan/sql-vs-nosql-databases-whats-the-difference-a05492b48d99)<br>
