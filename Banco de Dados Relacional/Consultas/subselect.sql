SELECT * FROM pedido WHERE id =
(SELECT MAX(id) FROM pedido)