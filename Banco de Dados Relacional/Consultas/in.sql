SELECT *
FROM produto
WHERE id IN (SELECT idproduto
						FROM item)