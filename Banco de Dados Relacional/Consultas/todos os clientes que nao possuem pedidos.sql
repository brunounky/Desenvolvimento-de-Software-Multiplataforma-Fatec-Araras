SELECT * FROM cliente
INNER JOIN pedido ON cliente.id = pedido.idcliente
WHERE cliente.id NOT IN (SELECT pedido.idcliente)