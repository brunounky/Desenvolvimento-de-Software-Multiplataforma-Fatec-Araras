SELECT *
FROM produto
WHERE id NOT IN (SELECT idproduto
						FROM item)