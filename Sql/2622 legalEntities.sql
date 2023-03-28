SELECT c.name
FROM customers c INNER JOIN legal_person d ON 
    c.id = d.id_customers
