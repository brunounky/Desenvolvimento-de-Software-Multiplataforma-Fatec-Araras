SELECT pedido.id, nome, (select count(pedido.idcliente) AS total) FROM pedido 
INNER JOIN cliente ON pedido.idcliente = cliente.id WHERE pedido.idcliente
GROUP BY 2