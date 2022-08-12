DROP DATABASE revendedora;

CREATE DATABASE revendedora;

USE revendedora;

CREATE TABLE Automovel(
    renavam CHAR(11) PRIMARY KEY,
    placa CHAR(7) UNIQUE NOT NULL,
    marca VARCHAR(50) NOT NULL,
    modelo VARCHAR(50) NOT NULL,
    ano_fabricacao YEAR NOT NULL,
    ano_modelo YEAR NOT NULL,
    cor VARCHAR(25) NOT NULL,
    motor VARCHAR(50) NOT NULL,
    portas SMALLINT NOT NULL DEFAULT 4,
    combustivel SET('Gasolina', 'Alcool') NOT NULL,
    preco DECIMAL(10, 2) NOT NULL
);

CREATE TABLE Cliente(
    id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sobrenome VARCHAR(50) NOT NULL,
    telefone VARCHAR(10) NOT NULL,
    rua VARCHAR(50) NOT NULL,
    numero SMALLINT,
    complemento VARCHAR(255) DEFAULT '',
    bairro VARCHAR(50) NOT NULL,
    cidade VARCHAR(50) NOT NULL,
    estado VARCHAR(50) NOT NULL,
    cep VARCHAR(50) NOT NULL
);

CREATE TABLE Vendedor(
    id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sobrenome VARCHAR(50) NOT NULL,
    telefone VARCHAR(10) NOT NULL,
    rua VARCHAR(50) NOT NULL,
    numero SMALLINT,
    complemento VARCHAR(255) DEFAULT '',
    bairro VARCHAR(50) NOT NULL,
    cidade VARCHAR(50) NOT NULL,
    estado VARCHAR(50) NOT NULL,
    cep VARCHAR(50) NOT NULL,
    data_admissao DATE NOT NULL,
    salario DECIMAL(10, 2) NOT NULL
);

CREATE TABLE Negocio_fechado(
    id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    data_venda DATETIME NOT NULL,
    preco_pago DECIMAL(10, 2) NOT NULL,
    comprador SMALLINT,
    vendedor SMALLINT,
    renavam CHAR(11),
    FOREIGN KEY (comprador) REFERENCES Cliente(id),
    FOREIGN KEY (vendedor) REFERENCES Vendedor(id),
    FOREIGN KEY (renavam) REFERENCES Automovel(renavam)
);