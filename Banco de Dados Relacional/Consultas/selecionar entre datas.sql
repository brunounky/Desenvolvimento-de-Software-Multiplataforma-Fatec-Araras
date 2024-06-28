SELECT pedido.id, idformapagto, descricao FROM pedido
INNER JOIN formapagto ON pedido.idformapagto = formapagto.id 
WHERE datemissao>='2019-01-01' AND datemissao<='2019-06-30'