delimiter $$
CREATE OR REPLACE FUNCTION soma(n1 FLOAT, n2 FLOAT) RETURNS FLOAT
BEGIN
	DECLARE resultado FLOAT;
	
	SET resultado = n1 + n2;
	
	RETURN resultado;
	
END $$
delimiter ;