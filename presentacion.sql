-- phpMyAdmin SQL Dump
-- version 4.8.2
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Sep 03, 2018 at 04:29 PM
-- Server version: 10.1.34-MariaDB
-- PHP Version: 7.2.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `horoscopo`
--

-- --------------------------------------------------------

--
-- Table structure for table `presentacion`
--

CREATE TABLE `presentacion` (
  `id` int(2) NOT NULL,
  `saludo` text CHARACTER SET utf8 COLLATE utf8_spanish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `presentacion`
--

INSERT INTO `presentacion` (`id`, `saludo`) VALUES
(1, 'Nuestros expertos en Astrolog?a nos han analizado la compatibilidad de todos los Hor?scopos y Signos, para que puedas leer todo lo que necesitas saber sobre tu pareja y comprenderla mejor, anticiparte a posibles problemas o saber c?mo actuar ante ciertas reacciones y comportamiento de ?l o ella.\r\n\r\nSi la compatibilidad entre ambos signos es baja, damos algunas ideas sobre c?mo superar los obst?culos, vencer las predicciones de los astros y contribuir a que teng?is una relaci?n feliz y duradera.\r\n\r\nSi la compabilidad es alta entre tu signo y el de tu pareja ?Enhorabuena! Pero no debes bajar la guardia. Cu?nto m?s os esforc?is en vuestra relaci?n, m?s felices ser?is.\r\nSeleccionar el signo con el que quieres ver tu compatibilidad a continuacion:');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `presentacion`
--
ALTER TABLE `presentacion`
  ADD PRIMARY KEY (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
