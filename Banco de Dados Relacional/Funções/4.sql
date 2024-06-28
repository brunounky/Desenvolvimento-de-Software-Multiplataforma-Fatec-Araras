delimiter $$
CREATE OR REPLACE FUNCTION maior_salario(ncargo VARCHAR(40)) RETURNS FLOAT
BEGIN

	RETURN (SELECT MAX(salario) FROM empregado WHERE cargo = ncargo);
	
END $$
delimiter ;

SELECT maior_salario('ENGENHEIRO')