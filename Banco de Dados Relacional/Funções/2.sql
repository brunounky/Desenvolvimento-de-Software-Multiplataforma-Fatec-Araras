delimiter $$
CREATE OR REPLACE FUNCTION hello(texto CHAR(20)) RETURNS CHAR(50)
BEGIN

	RETURN CONCAT('Hello ', texto, '!');

END $$
delimiter ;

SELECT hello('teste');