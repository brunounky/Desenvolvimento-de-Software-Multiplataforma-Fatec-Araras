SELECT id, datemissao, (SELECT sum(item.precounitario*item.quantidade) AS valortotal) from pedido 
INNER JOIN item ON pedido.id = item.idpedido
GROUP BY 1,2