DROP DATABASE clinica;

CREATE DATABASE clinica;

USE clinica;

CREATE TABLE Medico(
    crm VARCHAR(15) PRIMARY KEY,
    nome VARCHAR(40) NOT NULL,
    idade SMALLINT CHECK(idade > 23),
    especialidade VARCHAR(20) NOT NULL DEFAULT 'Ortopedia'
);

CREATE TABLE Sala(
    id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    numero_sala SMALLINT CHECK(numero_sala > 1 AND numero_sala < 50),
    andar INT UNIQUE NOT NULL CHECK(andar < 12),
    medico_crm VARCHAR(15),
    FOREIGN KEY (medico_crm) REFERENCES Medico(crm)
);

CREATE TABLE Paciente(
    id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(40) NOT NULL,
    data_nascimento DATE,
    cidade CHAR(30) DEFAULT 'Itabuna',
    doenca VARCHAR(40) NOT NULL,
    plano_saude VARCHAR(40) NOT NULL DEFAULT 'SUS'
);

CREATE TABLE Consulta(
    codigo_consulta SMALLINT PRIMARY KEY,
    data_horario DATETIME,
    medico_crm VARCHAR(15),
    paciente_id SMALLINT,
    FOREIGN KEY (medico_crm) REFERENCES Medico(crm),
    FOREIGN KEY (paciente_id) REFERENCES Paciente(id)
);

CREATE TABLE Funcionario(
    matricula VARCHAR(15) PRIMARY KEY,
    nome VARCHAR(50) NOT NULL,
    data_nascimento DATE NOT NULL,
    data_admissao DATE NOT NULL,
    cargo VARCHAR(40) NOT NULL DEFAULT 'Assistente Medico',
    salario FLOAT NOT NULL DEFAULT 510
);
