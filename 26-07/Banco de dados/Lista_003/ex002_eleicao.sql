DROP DATABASE eleicao;

CREATE DATABASE eleicao;

USE eleicao;

CREATE TABLE Cargo(
    codigo_cargo INT PRIMARY KEY AUTO_INCREMENT,
    nome_cargo VARCHAR(30) NOT NULL CHECK(nome_cargo != 'Prefeito' AND nome_cargo != 'Vereador'),
    salario DECIMAL(10, 2) NOT NULL DEFAULT 17000,
    numero_vagas INT UNIQUE NOT NULL
);

CREATE TABLE Partido(
    codigo_partido INT PRIMARY KEY AUTO_INCREMENT,
    sigla char(5) UNIQUE NOT NULL,
    nome VARCHAR(40) UNIQUE NOT NULL,
    numero INT UNIQUE NOT NULL
);

CREATE TABLE Candidato(
    numero_candidato INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(40) UNIQUE NOT NULL,
    codigo_cargo INT NOT NULL,
    codigo_partido INT NOT NULL,
    FOREIGN KEY (codigo_cargo) REFERENCES Cargo(codigo_cargo),
    FOREIGN KEY (codigo_partido) REFERENCES Partido(codigo_partido)
);

CREATE TABLE Eleitor(
    titulo_eleitor VARCHAR(30) PRIMARY KEY,
    zona_eleitoral CHAR(5) NOT NULL,
    sessao_eleitoral CHAR(5) NOT NULL,
    nome VARCHAR(50) NOT NULL
);

CREATE TABLE Voto(
    id INT PRIMARY KEY AUTO_INCREMENT,
    titulo_eleitor VARCHAR(30) NOT NULL,
    numero_candidato INT NOT NULL,
    FOREIGN KEY (titulo_eleitor) REFERENCES Eleitor(titulo_eleitor),
    FOREIGN KEY (numero_candidato) REFERENCES Candidato(numero_candidato)
);