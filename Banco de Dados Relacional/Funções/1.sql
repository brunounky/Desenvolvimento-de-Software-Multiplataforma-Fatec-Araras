delimiter $$
CREATE OR REPLACE PROCEDURE quantidade_vendidos(IN qde INT)
BEGIN

	SELECT produto.id, produto.descricao, SUM(item.quantidade)
	FROM produto
	INNER JOIN item
	ON item.idproduto=produto.id
	GROUP BY id;
	
END $$
delimiter ;

CALL `quantidade_vendidos`('25')