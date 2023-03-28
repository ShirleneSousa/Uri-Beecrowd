SELECT p.name, s.name
FROM products p, providers s
where p.id_providers=s.id AND s.name = 'Ajax SA';
