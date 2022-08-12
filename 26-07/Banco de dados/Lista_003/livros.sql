-- Active: 1658865119418@@db@3306@livros
DROP DATABASE livros;

CREATE DATABASE livros;

USE livros;

CREATE TABLE Editora (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL
);

CREATE TABLE Livro (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    editora_id INT NOT NULL,
    FOREIGN KEY (editora_id) REFERENCES Editora(id)
);

CREATE TABLE Autor (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL
);

CREATE TABLE Autor_Livro (
    autor_id INT,
    livro_id INT,
    PRIMARY KEY(autor_id, livro_id),
    FOREIGN KEY (autor_id) REFERENCES Autor(id),
    FOREIGN KEY (livro_id) REFERENCES Livro(id)
);

CREATE TABLE Categoria (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL
);

CREATE TABLE Categoria_Livro (
    categoria_id INT,
    livro_id INT,
    PRIMARY KEY(categoria_id, livro_id),
    FOREIGN KEY (categoria_id) REFERENCES Categoria(id),
    FOREIGN KEY (livro_id) REFERENCES Livro(id)
);

INSERT INTO Editora (nome) VALUES ("Panini"), ("JBC");

INSERT INTO Livro (nome, editora_id)
    VALUES  ("Tuma da Monica vol. 1", 1),
            ("Tuma da Monica vol. 2", 1),
            ("My Hero Academia vol. 1", 2);

INSERT INTO Autor (nome)
    VALUES  ("Mauricio de Solza"),
            ("Kôhei Horikoshi");

INSERT INTO Autor_Livro (autor_id, livro_id)
    VALUES  (1, 1),
            (1, 2),
            (2, 3);

INSERT INTO Categoria (nome)
    VALUES  ("Ação"),
            ("Aventura"),
            ("Infantil");

INSERT INTO Categoria_Livro (categoria_id, livro_id)
    VALUES  (2, 1),
            (2, 2),
            (3, 1),
            (3, 2),
            (1, 3),
            (2, 3);
