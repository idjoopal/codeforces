-- write your code in SQLite 3.11.0
SELECT inv_num, SUM(price) AS sum
FROM invoice_items
GROUP BY inv_num;