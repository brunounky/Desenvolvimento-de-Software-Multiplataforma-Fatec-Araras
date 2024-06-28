SELECT cliente.nome, representante.nome 
FROM cliente INNER JOIN representante ON cliente.idrepresentante = representante.id	