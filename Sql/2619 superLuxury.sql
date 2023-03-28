SELECT p.name, s.name, p.price
FROM products p, providers s, categories c
WHERE p.id_providers = s.id AND p.id_categories = c.id
AND p.price > 1000.00 AND c.name = 'Super Luxury';
