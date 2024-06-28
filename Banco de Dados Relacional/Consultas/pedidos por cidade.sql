SELECT * FROM pedido
INNER JOIN cliente ON pedido.idcliente=cliente.id WHERE cliente.municipio = 'itapira'