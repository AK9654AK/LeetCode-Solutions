# Write your MySQL query statement below



select name AS customers from Customers where id Not in(select customerid from Orders);