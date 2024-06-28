SELECT pedido.id, pedido.idformapagto, formapagto.descricao, COUNT(idformapagto) FROM pedido 
INNER JOIN formapagto ON pedido.idformapagto=formapagto.id
GROUP BY 2