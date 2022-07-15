drop database lista002;
create database lista002;

use lista002;

create table Aluno(
	id int auto_increment primary key,
	nome varchar(50),
    telefone char(50),
	cidade varchar(50)
);
desc Aluno;

CREATE TABLE alunos2 (
	codigo int,
    nome varchar(200),
    telefone varchar(50),
    cidade varchar(100)
);

-- Tabela funcionários contendo os campos nome, endereço, telefone, cidade, estado, cep, rg, cpf e salário.
create table Funcionario(
	codigo int auto_increment primary key,
	nome varchar(50) not null,
    endereco varchar(50),
    telefone varchar(50),
    cidade varchar(50),
    estado char(2),
    cep varchar(50),
    rg varchar(50),
    cpf char(11),
    salario decimal(5, 2)
);
desc Funcionario;

-- tabela fornecedores contendo os campos nome, endereço, telefone, cidade, estado, cep, cnpj e email
create table Fornecedor(
	nome varchar(50),
    endereco varchar(50),
    telefone varchar(50),
    cidade varchar(50),
    estado char(2),
    cep varchar(50),
    cnpj char(14),
    email varchar(50)
);
desc Fornecedor;

-- tabela livros contendo o campo código, nome, categoria, resumo, precocusto, precovenda.
create table Livro(
	codigo int auto_increment primary key,
    nome varchar(50) not null,
    categoria varchar(50),
    resumo varchar(256),
    precocusto int not null,
    precovenda int not null
);
desc Livro;

-- tabela estoque contendo o campo código, nomedoproduto, categoria, quantidade e fornecedor.
create table Estoque(
	codigo int auto_increment primary key,
    nomedoproduto varchar(50) not null,
    categoria varchar(50) not null,
    quantidade int,
    fornecedor int not null
);

-- tabela notas contendo os campos código, nomedoaluno, bimestre
create table Notas(
	codigo int auto_increment primary key,
    nomedoaluno varchar(50) not null,
    bimestre int not null
);

-- tabela caixa contendo os campos código, data, descrição, debito e credito
create table Caixa(
	codigo int auto_increment primary key,
    dataOperacao timestamp,
    descricao varchar(256),
    debito decimal(5, 2),
    credito decimal(5, 2)
);

-- tabela contasAPagar contendo os campos código, data_conta, descrição, valor e data_pagamento
create table ContasAPagar(
	codigo int auto_increment primary key,
    data_conta timestamp not null,
    descricao varchar(256),
    data_pagamento timestamp
);

-- tabela contasAReceber contendo os campos código, data_conta, descrição, valor e data_recebimento
create table ContasAReceber(
	codigo int auto_increment primary key,
    data_conta timestamp not null,
    descricao varchar(256),
    valor decimal(5, 2) not null,
    data_recebimento timestamp
);

-- tabela filmes contendo os campos código, nome, sinopse, categoria e diretor
create table Filme(
	codigo int auto_increment primary key,
    nome varchar(50) not null,
    sinopse varchar(256),
    categorai varchar(256),
    diretor varchar(50)
);

-- tabela CDs contendo os campos código, nome, cantor, ano e quantidademusicas
create table CD(
	codigo int auto_increment primary key,
    nome varchar(50) not null,
    cantor varchar(50) not null,
    ano timestamp,
    quantidade_de_musicas int not null
);

-- Exclua a tabela alunos: “DROP TABLE alunos2;”.
drop table alunos2;

-- Use o comando “desc” e veja se a tabela realmente foi excluída.
-- desc alunos2;

-- Exclua a tabela livros
drop table Livro;

-- Exclua a tabela contasAPagar.
drop table ContasAPagar;

-- Exclua a tabela contasAReceber.
drop table ContasAReceber;

-- Exclua a tabela filmes.
drop table Filme;

-- Agora iremos aprender como MUDAR O NOME das tabelas. É fácil, basta usar o comando ALTER TABLE.
-- Por exemplo se quisermos mudar o nome da tabela nome_antigo para nome_novo o comando ficará assim:
-- “ALTER TABLE nome_antigo RENAME TO nome_novo;”.
-- Renomeie a tabela alunos para super_alunos
alter table Aluno rename Super_Alunos;
desc Super_Alunos;

-- Altere o nome da tabela estoque para produtos
alter table Estoque rename Produtos;
desc Produtos;

-- Altere o nome da tabela notas para aprovados.
alter table Notas rename Aprovados;
desc Aprovados;

--  Altere o nome da tabela aprovados para notas.
alter table Aprovados rename Notas;
desc Notas;

-- Exclua a tabela notas.
drop table Notas;
-- desc Notas;

-- Altere o nome da tabela super_alunos para alunos
alter table Super_Alunos rename Alunos;
desc Alunos;

-- Altere o nome da tabela alunos para estudantes.
alter table Alunos rename Estudantes;
desc Estudantes;

--  Altere o nome da tabela estudantes para super_estudantes.
alter table Estudantes rename Super_Estudantes;
desc Super_Estudantes;

-- Exclua a tabela super_estudantes.
drop table Super_Estudantes;

-- desc super_estudantes e desc alunos
-- desc Super_Estudantes;
-- desc Alunos;

-- Inclua o atributo estado na tabela alunos: “ALTER TABLE ALUNOS ADD ESTADO VARCHAR;”.
-- ALTER TABLE ALUNOS ADD ESTADO VARCHAR;

-- Crie novamente a tabela caixa.
-- create table Caixa(
-- 	codigo int auto_increment primary key,
--     dataOperacao timestamp,
--     descricao varchar(256),
--     debito decimal(5, 2),
--     credito decimal(5, 2)
-- );

-- Adicione o campo observação do tipo varchar na tabela caixa.
-- ALTER TABLE Alunos ADD estado VARCHAR(50);

-- Adicione o campo cpf na tabela alunos.
-- alter table Alunos add cpf char(11);


--  Veja a estrutura da tabela caixa - desc.
desc Caixa;

-- Adicione o campo saldo na tabela caixa
ALTER TABLE Caixa ADD saldo decimal(5, 2);
desc Caixa;
