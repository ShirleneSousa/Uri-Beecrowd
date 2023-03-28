SELECT p.name
FROM products p, providers f
WHERE p.id_providers = f.id AND f.name LIKE 'P%' 
AND p.amount BETWEEN 10 and 20;
