USE [master]
GO
/****** Object:  Database [lms]    Script Date: 2017/4/12 17:02:30 ******/
CREATE DATABASE [lms]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'lms', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL11.MSSQLSERVER\MSSQL\DATA\lms.mdf' , SIZE = 5120KB , MAXSIZE = UNLIMITED, FILEGROWTH = 1024KB )
 LOG ON 
( NAME = N'lms_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL11.MSSQLSERVER\MSSQL\DATA\lms_log.ldf' , SIZE = 2048KB , MAXSIZE = 2048GB , FILEGROWTH = 10%)
GO
ALTER DATABASE [lms] SET COMPATIBILITY_LEVEL = 110
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [lms].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [lms] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [lms] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [lms] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [lms] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [lms] SET ARITHABORT OFF 
GO
ALTER DATABASE [lms] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [lms] SET AUTO_CREATE_STATISTICS ON 
GO
ALTER DATABASE [lms] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [lms] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [lms] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [lms] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [lms] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [lms] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [lms] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [lms] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [lms] SET  DISABLE_BROKER 
GO
ALTER DATABASE [lms] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [lms] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [lms] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [lms] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [lms] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [lms] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [lms] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [lms] SET RECOVERY FULL 
GO
ALTER DATABASE [lms] SET  MULTI_USER 
GO
ALTER DATABASE [lms] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [lms] SET DB_CHAINING OFF 
GO
ALTER DATABASE [lms] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [lms] SET TARGET_RECOVERY_TIME = 0 SECONDS 
GO
EXEC sys.sp_db_vardecimal_storage_format N'lms', N'ON'
GO
USE [lms]
GO
/****** Object:  Table [dbo].[Admin]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Admin](
	[Aid] [int] IDENTITY(1,1) NOT NULL,
	[Aname] [nvarchar](50) NULL,
	[Apwd] [nvarchar](50) NULL,
	[Atype] [int] NULL,
	[Aremarks] [nvarchar](50) NULL,
	[Alasttime] [nvarchar](50) NULL,
 CONSTRAINT [PK_Admin] PRIMARY KEY CLUSTERED 
(
	[Aid] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Book]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Book](
	[Bid] [int] NULL,
	[ISBN] [nvarchar](50) NULL,
	[Bname] [nvarchar](50) NULL,
	[Bpublish] [nvarchar](50) NULL,
	[Beditor] [nvarchar](50) NULL,
	[Bcontents] [nvarchar](50) NULL,
	[Bplace] [nvarchar](50) NULL,
	[Bprice] [float] NULL,
	[Bnum] [int] NULL,
	[Bstore] [int] NULL,
	[twoNo] [int] NULL,
	[Bremarks] [nvarchar](50) NULL,
	[BpublishTime] [nvarchar](50) NULL,
	[BprintTime] [nvarchar](50) NULL,
	[Bcover] [nvarchar](50) NULL
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Borrow]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Borrow](
	[BorrId] [int] IDENTITY(1,1) NOT NULL,
	[Uno] [nvarchar](50) NULL,
	[Uname] [nvarchar](50) NULL,
	[ISBN] [nvarchar](50) NULL,
	[Bname] [nvarchar](50) NULL,
	[BorrNum] [int] NULL,
	[BorrTime] [nvarchar](50) NULL,
	[ReturnTime] [nvarchar](50) NULL,
	[Tstatus] [int] NULL,
 CONSTRAINT [PK_Borrow] PRIMARY KEY CLUSTERED 
(
	[BorrId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Class]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Class](
	[Cid] [int] IDENTITY(1,1) NOT NULL,
	[ClassNo] [nvarchar](50) NULL,
	[ClassName] [nvarchar](50) NULL,
	[MajorNo] [nvarchar](50) NULL,
 CONSTRAINT [PK_Class] PRIMARY KEY CLUSTERED 
(
	[Cid] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Config]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Config](
	[Cid] [int] IDENTITY(1,1) NOT NULL,
	[Cname] [nvarchar](50) NULL,
	[MaxNum] [int] NULL,
	[Time] [int] NULL,
	[Punish] [int] NULL,
	[SameNum] [int] NULL,
 CONSTRAINT [PK_Config] PRIMARY KEY CLUSTERED 
(
	[Cid] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Dept]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Dept](
	[Did] [int] IDENTITY(1,1) NOT NULL,
	[DeptNo] [nvarchar](50) NULL,
	[DeptName] [nvarchar](50) NULL,
 CONSTRAINT [PK_Dept] PRIMARY KEY CLUSTERED 
(
	[Did] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Major]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Major](
	[Mid] [int] IDENTITY(1,1) NOT NULL,
	[MajorNo] [nvarchar](50) NULL,
	[MajorName] [nvarchar](50) NULL,
	[DeptNo] [nvarchar](50) NULL,
 CONSTRAINT [PK_Major] PRIMARY KEY CLUSTERED 
(
	[Mid] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[OneBook]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[OneBook](
	[oneNo] [int] IDENTITY(1,1) NOT NULL,
	[oneName] [nvarchar](50) NULL,
 CONSTRAINT [PK_OneBook] PRIMARY KEY CLUSTERED 
(
	[oneNo] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Punish]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Punish](
	[Pno] [int] IDENTITY(1,1) NOT NULL,
	[Uno] [nvarchar](50) NULL,
	[Uname] [nvarchar](50) NULL,
	[ISBN] [nvarchar](50) NULL,
	[Bname] [nvarchar](50) NULL,
	[Reason] [nvarchar](50) NULL,
	[Fee] [float] NULL,
	[BorrId] [int] NULL,
 CONSTRAINT [PK_Punish] PRIMARY KEY CLUSTERED 
(
	[Pno] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[Renewal]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Renewal](
	[Rno] [int] IDENTITY(1,1) NOT NULL,
	[Uno] [nvarchar](50) NULL,
	[Uname] [nvarchar](50) NULL,
	[ISBN] [nvarchar](50) NULL,
	[Bname] [nvarchar](50) NULL,
 CONSTRAINT [PK_Renewal] PRIMARY KEY CLUSTERED 
(
	[Rno] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[TwoBook]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[TwoBook](
	[twoNo] [int] IDENTITY(1,1) NOT NULL,
	[twoName] [nvarchar](50) NULL,
	[oneNo] [int] NULL,
 CONSTRAINT [PK_TwoBook] PRIMARY KEY CLUSTERED 
(
	[twoNo] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
/****** Object:  Table [dbo].[UserInfo]    Script Date: 2017/4/12 17:02:30 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[UserInfo](
	[Uno] [nvarchar](50) NOT NULL,
	[Uname] [nvarchar](50) NULL,
	[Ujob] [nvarchar](50) NULL,
	[Usex] [nvarchar](50) NULL,
	[Uage] [int] NULL,
	[Ubirthday] [nvarchar](50) NULL,
	[DeptNo] [nvarchar](50) NULL,
	[MajorNo] [nvarchar](50) NULL,
	[ClassNo] [nvarchar](50) NULL,
	[Uphone] [nvarchar](50) NULL,
	[Uemail] [nvarchar](50) NULL,
	[Uremarks] [nvarchar](50) NULL,
	[Upwd] [nvarchar](50) NULL,
	[Ustatus] [int] NULL,
	[Ulasttime] [nvarchar](50) NULL,
 CONSTRAINT [PK_Reader] PRIMARY KEY CLUSTERED 
(
	[Uno] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]

GO
SET IDENTITY_INSERT [dbo].[Admin] ON 

INSERT [dbo].[Admin] ([Aid], [Aname], [Apwd], [Atype], [Aremarks], [Alasttime]) VALUES (1, N'admin', N'admin', 1, N'2017-4-12', NULL)
INSERT [dbo].[Admin] ([Aid], [Aname], [Apwd], [Atype], [Aremarks], [Alasttime]) VALUES (2, N'a', N'a', 2, N'普通管理员', NULL)
SET IDENTITY_INSERT [dbo].[Admin] OFF
SET IDENTITY_INSERT [dbo].[Class] ON 

INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (1, N'2011-1', N'2011级1班', N'A1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (2, N'2012-1', N'2012级1班', N'A1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (3, N'2013-1', N'2013级1班', N'A1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (4, N'2014-1', N'2014级1班', N'A1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (5, N'2011-1', N'2011级1班', N'A2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (6, N'2012-1', N'2012级1班', N'A2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (7, N'2013-1', N'2013级1班', N'A2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (8, N'2014-1', N'2014级1班', N'A2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (9, N'2011-1', N'2011级1班', N'A3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (10, N'2012-1', N'2012级1班', N'A3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (11, N'2013-1', N'2013级1班', N'A3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (12, N'2014-1', N'2014级1班', N'A3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (13, N'2011-1', N'2011级1班', N'A4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (14, N'2012-1', N'2012级1班', N'A4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (15, N'2013-1', N'2013级1班', N'A4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (16, N'2014-1', N'2014级1班', N'A4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (17, N'2011-1', N'2011级1班', N'A5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (18, N'2012-1', N'2012级1班', N'A5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (19, N'2013-1', N'2013级1班', N'A5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (20, N'2014-1', N'2014级1班', N'A5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (21, N'2011-1', N'2011级1班', N'B1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (22, N'2012-1', N'2012级1班', N'B1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (23, N'2013-1', N'2013级1班', N'B1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (24, N'2014-1', N'2014级1班', N'B1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (25, N'2011-1', N'2011级1班', N'B2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (26, N'2012-1', N'2012级1班', N'B2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (27, N'2013-1', N'2013级1班', N'B2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (28, N'2014-1', N'2014级1班', N'B2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (29, N'2011-1', N'2011级1班', N'B3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (30, N'2012-1', N'2012级1班', N'B3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (31, N'2013-1', N'2013级1班', N'B3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (32, N'2014-1', N'2014级1班', N'B3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (33, N'2011-1', N'2011级1班', N'B4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (34, N'2012-1', N'2012级1班', N'B4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (35, N'2013-1', N'2013级1班', N'B4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (36, N'2014-1', N'2014级1班', N'B4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (37, N'2011-1', N'2011级1班', N'B5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (38, N'2012-1', N'2012级1班', N'B5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (39, N'2013-1', N'2013级1班', N'B5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (40, N'2014-1', N'2014级1班', N'B5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (41, N'2011-1', N'2011级1班', N'B6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (42, N'2012-1', N'2012级1班', N'B6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (43, N'2013-1', N'2013级1班', N'B6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (44, N'2014-1', N'2014级1班', N'B6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (45, N'2011-1', N'2011级1班', N'B7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (46, N'2012-1', N'2012级1班', N'B7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (47, N'2013-1', N'2013级1班', N'B7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (48, N'2014-1', N'2014级1班', N'B7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (49, N'2011-1', N'2011级1班', N'B8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (50, N'2012-1', N'2012级1班', N'B8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (51, N'2013-1', N'2013级1班', N'B8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (52, N'2014-1', N'2014级1班', N'B8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (53, N'2011-1', N'2011级1班', N'B9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (54, N'2012-1', N'2012级1班', N'B9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (55, N'2013-1', N'2013级1班', N'B9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (56, N'2014-1', N'2014级1班', N'B9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (57, N'2011-1', N'2011级1班', N'C1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (58, N'2012-1', N'2012级1班', N'C1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (59, N'2013-1', N'2013级1班', N'C1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (60, N'2014-1', N'2014级1班', N'C1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (61, N'2011-1', N'2011级1班', N'C2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (62, N'2012-1', N'2012级1班', N'C2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (63, N'2013-1', N'2013级1班', N'C2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (64, N'2014-1', N'2014级1班', N'C2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (65, N'2011-1', N'2011级1班', N'C3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (66, N'2012-1', N'2012级1班', N'C3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (67, N'2013-1', N'2013级1班', N'C3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (68, N'2014-1', N'2014级1班', N'C3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (69, N'2011-1', N'2011级1班', N'C4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (70, N'2012-1', N'2012级1班', N'C4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (71, N'2013-1', N'2013级1班', N'C4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (72, N'2014-1', N'2014级1班', N'C4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (73, N'2011-1', N'2011级1班', N'D1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (74, N'2012-1', N'2012级1班', N'D1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (75, N'2013-1', N'2013级1班', N'D1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (76, N'2014-1', N'2014级1班', N'D1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (77, N'2011-1', N'2011级1班', N'E1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (78, N'2012-1', N'2012级1班', N'E1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (79, N'2013-1', N'2013级1班', N'E1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (80, N'2014-1', N'2014级1班', N'E1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (81, N'2011-1', N'2011级1班', N'E2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (82, N'2012-1', N'2012级1班', N'E2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (83, N'2013-1', N'2013级1班', N'E2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (84, N'2014-1', N'2014级1班', N'E2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (85, N'2011-1', N'2011级1班', N'E3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (86, N'2012-1', N'2012级1班', N'E3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (87, N'2013-1', N'2013级1班', N'E3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (88, N'2014-1', N'2014级1班', N'E3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (89, N'2011-1', N'2011级1班', N'F1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (90, N'2012-1', N'2012级1班', N'F1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (91, N'2013-1', N'2013级1班', N'F1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (92, N'2014-1', N'2014级1班', N'F1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (93, N'2011-1', N'2011级1班', N'F2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (94, N'2012-1', N'2012级1班', N'F2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (95, N'2013-1', N'2013级1班', N'F2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (96, N'2014-1', N'2014级1班', N'F2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (97, N'2011-1', N'2011级1班', N'F3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (98, N'2012-1', N'2012级1班', N'F3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (99, N'2013-1', N'2013级1班', N'F3')
GO
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (100, N'2014-1', N'2014级1班', N'F3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (101, N'2011-1', N'2011级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (102, N'2012-1', N'2012级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (103, N'2013-1', N'2013级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (104, N'2014-1', N'2014级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (105, N'2011-1', N'2011级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (106, N'2012-1', N'2012级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (107, N'2013-1', N'2013级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (108, N'2014-1', N'2014级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (109, N'2011-1', N'2011级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (110, N'2012-1', N'2012级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (111, N'2013-1', N'2013级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (112, N'2014-1', N'2014级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (113, N'2011-1', N'2011级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (114, N'2012-1', N'2012级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (115, N'2013-1', N'2013级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (116, N'2014-1', N'2014级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (117, N'2011-1', N'2011级1班', N'H1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (118, N'2012-1', N'2012级1班', N'H1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (119, N'2013-1', N'2013级1班', N'H1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (120, N'2014-1', N'2014级1班', N'H1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (121, N'2011-1', N'2011级1班', N'H2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (122, N'2012-1', N'2012级1班', N'H2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (123, N'2013-1', N'2013级1班', N'H2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (124, N'2014-1', N'2014级1班', N'H2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (125, N'2011-1', N'2011级1班', N'H3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (126, N'2012-1', N'2012级1班', N'H3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (127, N'2013-1', N'2013级1班', N'H3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (128, N'2014-1', N'2014级1班', N'H3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (129, N'2011-1', N'2011级1班', N'H4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (130, N'2012-1', N'2012级1班', N'H4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (131, N'2013-1', N'2013级1班', N'H4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (132, N'2014-1', N'2014级1班', N'H4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (133, N'2011-1', N'2011级1班', N'H5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (134, N'2012-1', N'2012级1班', N'H5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (135, N'2013-1', N'2013级1班', N'H5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (136, N'2014-1', N'2014级1班', N'H5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (137, N'2011-1', N'2011级1班', N'H6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (138, N'2012-1', N'2012级1班', N'H6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (139, N'2013-1', N'2013级1班', N'H6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (140, N'2014-1', N'2014级1班', N'H6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (141, N'2011-1', N'2011级1班', N'H7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (142, N'2012-1', N'2012级1班', N'H7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (143, N'2013-1', N'2013级1班', N'H7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (144, N'2014-1', N'2014级1班', N'H7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (145, N'2011-1', N'2011级1班', N'H8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (146, N'2012-1', N'2012级1班', N'H8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (147, N'2013-1', N'2013级1班', N'H8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (148, N'2014-1', N'2014级1班', N'H8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (149, N'2011-1', N'2011级1班', N'H9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (150, N'2012-1', N'2012级1班', N'H9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (151, N'2013-1', N'2013级1班', N'H9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (152, N'2014-1', N'2014级1班', N'H9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (153, N'2011-1', N'2011级1班', N'H10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (154, N'2012-1', N'2012级1班', N'H10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (155, N'2013-1', N'2013级1班', N'H10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (156, N'2014-1', N'2014级1班', N'H10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (157, N'2011-1', N'2011级1班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (158, N'2012-1', N'2012级1班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (159, N'2013-1', N'2013级1班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (160, N'2014-1', N'2014级1班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (161, N'2011-2', N'2011级2班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (162, N'2012-2', N'2012级2班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (163, N'2013-2', N'2013级2班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (164, N'2014-2', N'2014级2班', N'I1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (165, N'2011-1', N'2011级1班', N'I2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (166, N'2012-1', N'2012级1班', N'I2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (167, N'2013-1', N'2013级1班', N'I2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (168, N'2014-1', N'2014级1班', N'I2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (169, N'2011-1', N'2011级1班', N'I3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (170, N'2012-1', N'2012级1班', N'I3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (171, N'2013-1', N'2013级1班', N'I3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (172, N'2014-1', N'2014级1班', N'I3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (173, N'2011-1', N'2011级1班', N'I4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (174, N'2012-1', N'2012级1班', N'I4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (175, N'2013-1', N'2013级1班', N'I4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (176, N'2014-1', N'2014级1班', N'I4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (177, N'2011-1', N'2011级1班', N'I5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (178, N'2012-1', N'2012级1班', N'I5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (179, N'2013-1', N'2013级1班', N'I5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (180, N'2014-1', N'2014级1班', N'I5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (181, N'2011-1', N'2011级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (182, N'2012-1', N'2012级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (183, N'2013-1', N'2013级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (184, N'2014-1', N'2014级1班', N'J1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (185, N'2011-1', N'2011级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (186, N'2012-1', N'2012级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (187, N'2013-1', N'2013级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (188, N'2014-1', N'2014级1班', N'J2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (189, N'2011-1', N'2011级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (190, N'2012-1', N'2012级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (191, N'2013-1', N'2013级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (192, N'2014-1', N'2014级1班', N'J3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (193, N'2011-1', N'2011级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (194, N'2012-1', N'2012级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (195, N'2013-1', N'2013级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (196, N'2014-1', N'2014级1班', N'J4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (197, N'2011-1', N'2011级1班', N'J5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (198, N'2012-1', N'2012级1班', N'J5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (199, N'2013-1', N'2013级1班', N'J5')
GO
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (200, N'2014-1', N'2014级1班', N'J5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (201, N'2011-1', N'2011级1班', N'J6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (202, N'2012-1', N'2012级1班', N'J6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (203, N'2013-1', N'2013级1班', N'J6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (204, N'2014-1', N'2014级1班', N'J6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (205, N'2011-1', N'2011级1班', N'J7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (206, N'2012-1', N'2012级1班', N'J7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (207, N'2013-1', N'2013级1班', N'J7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (208, N'2014-1', N'2014级1班', N'J7')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (209, N'2011-1', N'2011级1班', N'J8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (210, N'2012-1', N'2012级1班', N'J8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (211, N'2013-1', N'2013级1班', N'J8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (212, N'2014-1', N'2014级1班', N'J8')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (213, N'2011-1', N'2011级1班', N'J9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (214, N'2012-1', N'2012级1班', N'J9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (215, N'2013-1', N'2013级1班', N'J9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (216, N'2014-1', N'2014级1班', N'J9')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (217, N'2011-1', N'2011级1班', N'J10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (218, N'2012-1', N'2012级1班', N'J10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (219, N'2013-1', N'2013级1班', N'J10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (220, N'2014-1', N'2014级1班', N'J10')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (221, N'2011-1', N'2011级1班', N'K1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (222, N'2012-1', N'2012级1班', N'K1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (223, N'2013-1', N'2013级1班', N'K1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (224, N'2014-1', N'2014级1班', N'K1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (225, N'2011-1', N'2011级1班', N'K2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (226, N'2012-1', N'2012级1班', N'K2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (227, N'2013-1', N'2013级1班', N'K2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (228, N'2014-1', N'2014级1班', N'K2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (229, N'2011-1', N'2011级1班', N'K3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (230, N'2012-1', N'2012级1班', N'K3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (231, N'2013-1', N'2013级1班', N'K3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (232, N'2014-1', N'2014级1班', N'K3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (233, N'2011-1', N'2011级1班', N'K4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (234, N'2012-1', N'2012级1班', N'K4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (235, N'2013-1', N'2013级1班', N'K4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (236, N'2014-1', N'2014级1班', N'K4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (237, N'2011-1', N'2011级1班', N'K5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (238, N'2012-1', N'2012级1班', N'K5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (239, N'2013-1', N'2013级1班', N'K5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (240, N'2014-1', N'2014级1班', N'K5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (241, N'2011-1', N'2011级1班', N'K6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (242, N'2012-1', N'2012级1班', N'K6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (243, N'2013-1', N'2013级1班', N'K6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (244, N'2014-1', N'2014级1班', N'K6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (245, N'2011-1', N'2011级1班', N'L1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (246, N'2012-1', N'2012级1班', N'L1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (247, N'2013-1', N'2013级1班', N'L1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (248, N'2014-1', N'2014级1班', N'L1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (249, N'2011-1', N'2011级1班', N'L2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (250, N'2012-1', N'2012级1班', N'L2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (251, N'2013-1', N'2013级1班', N'L2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (252, N'2014-1', N'2014级1班', N'L2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (253, N'2011-1', N'2011级1班', N'L3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (254, N'2012-1', N'2012级1班', N'L3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (255, N'2013-1', N'2013级1班', N'L3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (256, N'2014-1', N'2014级1班', N'L3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (257, N'2011-1', N'2011级1班', N'M1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (258, N'2012-1', N'2012级1班', N'M1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (259, N'2013-1', N'2013级1班', N'M1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (260, N'2014-1', N'2014级1班', N'M1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (261, N'2011-1', N'2011级1班', N'M2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (262, N'2012-1', N'2012级1班', N'M2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (263, N'2013-1', N'2013级1班', N'M2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (264, N'2014-1', N'2014级1班', N'M2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (265, N'2011-1', N'2011级1班', N'M3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (266, N'2012-1', N'2012级1班', N'M3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (267, N'2013-1', N'2013级1班', N'M3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (268, N'2014-1', N'2014级1班', N'M3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (269, N'2011-1', N'2011级1班', N'M4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (270, N'2012-1', N'2012级1班', N'M4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (271, N'2013-1', N'2013级1班', N'M4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (272, N'2014-1', N'2014级1班', N'M4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (273, N'2011-1', N'2011级1班', N'M5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (274, N'2012-1', N'2012级1班', N'M5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (275, N'2013-1', N'2013级1班', N'M5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (276, N'2014-1', N'2014级1班', N'M5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (277, N'2011-1', N'2011级1班', N'N1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (278, N'2012-1', N'2012级1班', N'N1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (279, N'2013-1', N'2013级1班', N'N1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (280, N'2014-1', N'2014级1班', N'N1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (281, N'2011-1', N'2011级1班', N'N2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (282, N'2012-1', N'2012级1班', N'N2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (283, N'2013-1', N'2013级1班', N'N2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (284, N'2014-1', N'2014级1班', N'N2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (285, N'2011-1', N'2011级1班', N'O1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (286, N'2012-1', N'2012级1班', N'O1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (287, N'2013-1', N'2013级1班', N'O1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (288, N'2014-1', N'2014级1班', N'O1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (289, N'2011-1', N'2011级1班', N'P1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (290, N'2012-1', N'2012级1班', N'P1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (291, N'2013-1', N'2013级1班', N'P1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (292, N'2014-1', N'2014级1班', N'P1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (293, N'2011-1', N'2011级1班', N'P2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (294, N'2012-1', N'2012级1班', N'P2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (295, N'2013-1', N'2013级1班', N'P2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (296, N'2014-1', N'2014级1班', N'P2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (297, N'2011-1', N'2011级1班', N'P3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (298, N'2012-1', N'2012级1班', N'P3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (299, N'2013-1', N'2013级1班', N'P3')
GO
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (300, N'2014-1', N'2014级1班', N'P3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (301, N'2011-1', N'2011级1班', N'P4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (302, N'2012-1', N'2012级1班', N'P4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (303, N'2013-1', N'2013级1班', N'P4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (304, N'2014-1', N'2014级1班', N'P4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (305, N'2011-1', N'2011级1班', N'P5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (306, N'2012-1', N'2012级1班', N'P5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (307, N'2013-1', N'2013级1班', N'P5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (308, N'2014-1', N'2014级1班', N'P5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (309, N'2011-1', N'2011级1班', N'P6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (310, N'2012-1', N'2012级1班', N'P6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (311, N'2013-1', N'2013级1班', N'P6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (312, N'2014-1', N'2014级1班', N'P6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (313, N'2011-1', N'2011级1班', N'Q1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (314, N'2012-1', N'2012级1班', N'Q1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (315, N'2013-1', N'2013级1班', N'Q1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (316, N'2014-1', N'2014级1班', N'Q1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (317, N'2011-1', N'2011级1班', N'Q2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (318, N'2012-1', N'2012级1班', N'Q2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (319, N'2013-1', N'2013级1班', N'Q2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (320, N'2014-1', N'2014级1班', N'Q2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (321, N'2011-1', N'2011级1班', N'Q3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (322, N'2012-1', N'2012级1班', N'Q3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (323, N'2013-1', N'2013级1班', N'Q3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (324, N'2014-1', N'2014级1班', N'Q3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (325, N'2011-1', N'2011级1班', N'Q4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (326, N'2012-1', N'2012级1班', N'Q4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (327, N'2013-1', N'2013级1班', N'Q4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (328, N'2014-1', N'2014级1班', N'Q4')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (329, N'2011-1', N'2011级1班', N'Q5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (330, N'2012-1', N'2012级1班', N'Q5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (331, N'2013-1', N'2013级1班', N'Q5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (332, N'2014-1', N'2014级1班', N'Q5')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (333, N'2011-1', N'2011级1班', N'Q6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (334, N'2012-1', N'2012级1班', N'Q6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (335, N'2013-1', N'2013级1班', N'Q6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (336, N'2014-1', N'2014级1班', N'Q6')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (337, N'2011-1', N'2011级1班', N'R1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (338, N'2012-1', N'2012级1班', N'R1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (339, N'2013-1', N'2013级1班', N'R1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (340, N'2014-1', N'2014级1班', N'R1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (341, N'2011-1', N'2011级1班', N'R2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (342, N'2012-1', N'2012级1班', N'R2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (343, N'2013-1', N'2013级1班', N'R2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (344, N'2014-1', N'2014级1班', N'R2')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (345, N'2011-1', N'2011级1班', N'R3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (346, N'2012-1', N'2012级1班', N'R3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (347, N'2013-1', N'2013级1班', N'R3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (348, N'2014-1', N'2014级1班', N'R3')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (349, N'2011-1', N'2011级1班', N'S1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (350, N'2012-1', N'2012级1班', N'S1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (351, N'2013-1', N'2013级1班', N'S1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (352, N'2014-1', N'2014级1班', N'S1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (353, N'2011-1', N'2011级1班', N'T1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (354, N'2012-1', N'2012级1班', N'T1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (355, N'2013-1', N'2013级1班', N'T1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (356, N'2014-1', N'2014级1班', N'T1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (357, N'2011-1', N'2011级1班', N'U1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (358, N'2012-1', N'2012级1班', N'U1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (359, N'2013-1', N'2013级1班', N'U1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (360, N'2014-1', N'2014级1班', N'U1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (361, N'2011-1', N'2011级1班', N'V1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (362, N'2012-1', N'2012级1班', N'V1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (363, N'2013-1', N'2013级1班', N'V1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (364, N'2014-1', N'2014级1班', N'V1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (365, N'2011-1', N'2011级1班', N'W1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (366, N'2012-1', N'2012级1班', N'W1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (367, N'2013-1', N'2013级1班', N'W1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (368, N'2014-1', N'2014级1班', N'W1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (369, N'2011-1', N'2011级1班', N'X1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (370, N'2012-1', N'2012级1班', N'X1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (371, N'2013-1', N'2013级1班', N'X1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (372, N'2014-1', N'2014级1班', N'X1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (373, N'2011-1', N'2011级1班', N'Y1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (374, N'2012-1', N'2012级1班', N'Y1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (375, N'2013-1', N'2013级1班', N'Y1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (376, N'2014-1', N'2014级1班', N'Y1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (377, N'2011-1', N'2011级1班', N'Z1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (378, N'2012-1', N'2012级1班', N'Z1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (379, N'2013-1', N'2013级1班', N'Z1')
INSERT [dbo].[Class] ([Cid], [ClassNo], [ClassName], [MajorNo]) VALUES (380, N'2014-1', N'2014级1班', N'Z1')
SET IDENTITY_INSERT [dbo].[Class] OFF
SET IDENTITY_INSERT [dbo].[Config] ON 

INSERT [dbo].[Config] ([Cid], [Cname], [MaxNum], [Time], [Punish], [SameNum]) VALUES (1, N'本科生', 4, 60, 2, 1)
INSERT [dbo].[Config] ([Cid], [Cname], [MaxNum], [Time], [Punish], [SameNum]) VALUES (2, N'研究生', 6, 60, 2, 2)
INSERT [dbo].[Config] ([Cid], [Cname], [MaxNum], [Time], [Punish], [SameNum]) VALUES (3, N'教师', 8, 90, 0, 3)
SET IDENTITY_INSERT [dbo].[Config] OFF
SET IDENTITY_INSERT [dbo].[Dept] ON 

INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (1, N'W1', N'文学与新闻传播学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (2, N'W2', N'蒙古学学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (3, N'W3', N'历史与旅游文化学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (4, N'W4', N'马克思主义学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (5, N'W5', N'外国语学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (6, N'L6', N'民族学与社会学学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (7, N'L7', N'数学科学学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (8, N'L8', N'经济管理学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (9, N'G9', N'计算机学院（软件学院）')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (10, N'Z10', N'满洲里学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (11, N'G11', N'电子信息工程学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (12, N'L12', N'物理科学与技术学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (13, N'W13', N'公共管理学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (14, N'W14', N'法学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (15, N'L15', N'物理科学与技术学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (16, N'L16', N'生命科学学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (17, N'L17', N'化学化工学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (18, N'L18', N'生态与环境学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (19, N'Z19', N'体育教学部')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (20, N'Z20', N'国际教育学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (21, N'Z21', N'继续教育学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (22, N'W22', N'艺术学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (23, N'Z23', N'交通学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (24, N'Z24', N'创业学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (25, N'Z25', N'鄂尔多斯学院')
INSERT [dbo].[Dept] ([Did], [DeptNo], [DeptName]) VALUES (26, N'Z26', N'教务处')
SET IDENTITY_INSERT [dbo].[Dept] OFF
SET IDENTITY_INSERT [dbo].[Major] ON 

INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (1, N'A1', N'汉语言文学', N'W1')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (2, N'A2', N'汉语国际教育', N'W1')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (3, N'A3', N'新闻学', N'W1')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (4, N'A4', N'编辑出版学（数字出版方向）', N'W1')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (5, N'A5', N'播音与主持艺术', N'W1')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (6, N'B1', N'旅游管理专业', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (7, N'B2', N'蒙授历史专业', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (8, N'B3', N'播音与主持艺术专业', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (9, N'B4', N'编辑出版学专业', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (10, N'B5', N'新闻学专业', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (11, N'B6', N'蒙古语言文学专业 （基里尔文班）', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (12, N'B7', N'蒙古语言文学专业（文理综合班）', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (13, N'B8', N'蒙古语言文学专业 （基地班）', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (14, N'B9', N'蒙授预科班', N'W2')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (15, N'C1', N'历史学', N'W3')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (16, N'C2', N'旅游管理学', N'W3')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (17, N'C3', N'文物与博物馆学', N'W3')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (18, N'C4', N'文史哲基地', N'W3')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (19, N'D1', N'马克思主义', N'W4')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (20, N'E1', N'英语', N'W5')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (21, N'E2', N'日语', N'W5')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (22, N'E3', N'俄语', N'W5')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (23, N'F1', N'民族学', N'L6')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (24, N'F2', N'社会学', N'L6')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (25, N'F3', N'社会工作', N'L6')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (26, N'J1', N'数学与应用数学专业', N'L7')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (27, N'J2', N'信息与计算科学专业', N'L7')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (28, N'J3', N'统计学专业', N'L7')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (29, N'J4', N'数理学基地', N'L7')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (30, N'H1', N'经济学', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (31, N'H2', N'国际经济与贸易', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (32, N'H3', N'金融学', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (33, N'H4', N'金融工程', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (34, N'H5', N'会计学', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (35, N'H6', N'财务管理', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (36, N'H7', N'工商管理', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (37, N'H8', N'管理科学', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (38, N'H9', N'人力资源管理', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (39, N'H10', N'市场营销', N'L8')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (40, N'I1', N'软件工程', N'G9')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (41, N'I2', N'计算机科学与技术', N'G9')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (42, N'I3', N'电子商务', N'G9')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (43, N'I4', N'信息管理', N'G9')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (44, N'I5', N'网络工程', N'G9')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (45, N'J1', N'信息管理', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (46, N'J2', N'网络工程', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (47, N'J3', N'人力资源管理', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (48, N'J4', N'财务管理', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (49, N'J5', N'工商管理', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (50, N'J6', N'俄语', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (51, N'J7', N'英语', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (52, N'J8', N'会计学', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (53, N'J9', N'汉语言文学', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (54, N'J10', N'数理学', N'Z10')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (55, N'K1', N'电子信息科学与技术', N'G11')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (56, N'K2', N'自动化', N'G11')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (57, N'K3', N'通信工程', N'G11')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (58, N'K4', N'控制工程', N'G11')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (59, N'K5', N'电子与通信工程', N'G11')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (60, N'K6', N'信号与信息处理', N'G11')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (61, N'L1', N'物理学', N'L12')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (62, N'L2', N'电子科学与技术', N'L12')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (63, N'L3', N'应用物理学', N'L12')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (64, N'M1', N'行政管理', N'W13')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (65, N'M2', N'公共事业管理', N'W13')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (66, N'M3', N'劳动与社会保障', N'W13')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (67, N'M4', N'土地资源管理', N'W13')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (68, N'M5', N'政治学与行政学', N'W13')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (69, N'N1', N'法学专业', N'W14')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (70, N'N2', N'蒙授法学专业', N'W14')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (71, N'O1', N'哲学', N'W15')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (72, N'P1', N'生物科学', N'L16')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (73, N'P2', N'生物技术', N'L16')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (74, N'P3', N'生物工程', N'L16')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (75, N'P4', N'食品科学与工程', N'L16')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (76, N'P5', N'食品质量与安全', N'L16')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (77, N'P6', N'园艺', N'L16')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (78, N'Q1', N'化学工程与工艺', N'L17')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (79, N'Q2', N'材料化学', N'L17')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (80, N'Q3', N'无机化学', N'L17')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (81, N'Q4', N'分析化学', N'L17')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (82, N'Q5', N'有机化学', N'L17')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (83, N'Q6', N'物理化学', N'L17')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (84, N'R1', N'生态学', N'L18')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (85, N'R2', N'环境科学与工程', N'L18')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (86, N'R3', N'草学', N'L18')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (87, N'S1', N'体育学院', N'Z19')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (88, N'T1', N'国际教育学院', N'Z20')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (89, N'U1', N'继续教育学院', N'Z21')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (90, N'V1', N'艺术学院', N'W22')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (91, N'W1', N'交通学院', N'Z23')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (92, N'X1', N'创业学院', N'Z24')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (93, N'Y1', N'鄂尔多斯', N'Z25')
INSERT [dbo].[Major] ([Mid], [MajorNo], [MajorName], [DeptNo]) VALUES (94, N'Z1', N'教务处', N'Z26')
SET IDENTITY_INSERT [dbo].[Major] OFF
SET IDENTITY_INSERT [dbo].[OneBook] ON 

INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (1, N'马克思主义、列宁主义、毛泽东思想、邓小平理论')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (2, N'哲学、宗教')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (3, N'社会科学总论')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (4, N'政治、法律')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (5, N'军事')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (6, N'经济')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (7, N'文化、科学、教育、体育')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (8, N'语言、文字')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (9, N'文学')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (10, N'艺术')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (11, N'历史、地理')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (12, N'自然科学总论')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (13, N'数理科学和化学')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (14, N'天文学、地球科学')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (15, N'生物科学')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (16, N'医药、卫生')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (17, N'农业科学')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (18, N'工业技术')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (19, N'交通运输')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (20, N'航空、航天')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (21, N'环境科学、安全科学')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (22, N'综合性图书')
INSERT [dbo].[OneBook] ([oneNo], [oneName]) VALUES (23, N'其它')
SET IDENTITY_INSERT [dbo].[OneBook] OFF
SET IDENTITY_INSERT [dbo].[TwoBook] ON 

INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (1, N'马克思、恩格斯著作', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (2, N'列宁著作', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (3, N'斯大林著作', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (4, N'毛泽东著作', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (5, N'邓小平著作', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (6, N'马克思、恩格斯、列宁、斯大林、毛泽东、邓小平著作汇编', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (7, N'马克思、恩格斯、列宁、斯大林、毛泽东、邓小平生平和传记', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (8, N'马克思主义、列宁主义、毛泽东思想、邓小平理论的学习和研究', 1)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (9, N'哲学教育与普及', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (10, N'哲学理论', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (11, N'世界哲学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (12, N'中国哲学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (13, N'亚洲哲学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (14, N'非洲哲学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (15, N'欧洲哲学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (16, N'大洋洲哲学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (17, N'美洲哲学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (18, N'思维科学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (19, N'逻辑学（论理学）', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (20, N'伦理学（道德哲学）', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (21, N'美学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (22, N'心理学', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (23, N'宗教', 2)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (24, N'社会科学理论与方法论', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (25, N'社会科学现状及发展', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (26, N'社会科学机构、团体、会议', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (27, N'社会科学研究方法', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (28, N'社会科学教育与普及', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (29, N'社会科学丛书、文集、连续性出版物', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (30, N'社会科学参考工具书', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (31, N'社会科学文献检索工具书', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (32, N'统计学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (33, N'社会学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (34, N'人口学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (35, N'管理学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (36, N'系统科学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (37, N'民族学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (38, N'人才学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (39, N'劳动科学', 3)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (40, N'政治理论', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (41, N'国际共产主义运动', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (42, N'中国共产党', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (43, N'各国共产党', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (44, N'工人、农民、青年、妇女运动与组织', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (45, N'世界政治', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (46, N'中国政治', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (47, N'各国政治', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (48, N'外交、国际关系', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (49, N'法律', 4)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (50, N'军事理论', 5)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (51, N'世界军事', 5)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (52, N'中国军事', 5)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (53, N'各国军事', 5)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (54, N'战略学、战役学、战术学', 5)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (55, N'军事技术', 5)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (56, N'军事地形学、军事地理学', 5)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (57, N'经济学', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (58, N'世界各国经济概况、经济史、经济地理', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (59, N'经济计划与管理', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (60, N'农业经济', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (61, N'工业经济', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (62, N'信息产业经济（总论）', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (63, N'交通运输经济', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (64, N'旅游经济', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (65, N'邮电经济', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (66, N'贸易经济', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (67, N'财政、金融', 6)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (68, N'文化理论', 7)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (69, N'世界各国文化与文化事业', 7)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (70, N'信息与知识传播', 7)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (71, N'科学、科学研究', 7)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (72, N'教育', 7)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (73, N'体育', 7)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (74, N'语言学', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (75, N'汉语', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (76, N'中国少数民族语言', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (77, N'常用外国语', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (78, N'汉藏语系', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (79, N'阿尔泰语系（突厥-蒙古-通古斯语系）', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (80, N'南亚语系（澳斯特罗-亚细亚语系）', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (81, N'南印语系（达罗毗荼语系、德拉维达语系）', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (82, N'南岛语系（马来亚-玻里尼西亚语系）', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (83, N'东北亚诸语言', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (84, N'高加索语系（伊比利亚-高加索语系）', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (85, N'乌拉尔语系（芬兰-乌戈尔语系）', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (86, N'闪-含语系（阿非罗-亚细亚语系）', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (87, N'印欧语系', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (88, N'非洲诸语言', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (89, N'美洲诸语言', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (90, N'大洋洲诸语言', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (91, N'国际辅助语', 8)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (92, N'文学理论', 9)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (93, N'世界文学', 9)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (94, N'中国文学', 9)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (95, N'各国文学', 9)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (96, N'艺术理论', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (97, N'世界各国艺术概况', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (98, N'绘画', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (99, N'书法、篆刻', 10)
GO
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (100, N'雕塑', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (101, N'摄影艺术', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (102, N'工艺美术', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (103, N'建筑艺术', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (104, N'音乐', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (105, N'舞蹈', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (106, N'戏剧艺术', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (107, N'电影、电视艺术', 10)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (108, N'史学理论', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (109, N'世界史', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (110, N'中国史', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (111, N'亚洲史', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (112, N'非洲史', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (113, N'欧洲史', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (114, N'大洋洲史', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (115, N'美洲史', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (116, N'传记', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (117, N'文物考古', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (118, N'风俗习惯', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (119, N'地理', 11)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (120, N'自然科学理论与方法论', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (121, N'自然科学现状及发展', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (122, N'自然科学机构、团体、会议', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (123, N'自然科学研究方法', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (124, N'自然科学教育与普及', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (125, N'自然科学丛书、文集、连续性出版物', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (126, N'自然科学参考工具书', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (127, N'自然科学文献检索工具', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (128, N'自然科学调查、考察', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (129, N'自然研究、自然历史', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (130, N'非线性科学', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (131, N'系统科学', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (132, N'情报学、情报工作', 12)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (133, N'数学', 13)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (134, N'力学', 13)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (135, N'物理学', 13)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (136, N'化学', 13)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (137, N'晶体学', 13)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (138, N'天文学', 14)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (139, N'绘测学', 14)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (140, N'地球物理学', 14)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (141, N'大气科学（气象学）', 14)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (142, N'地质学', 14)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (143, N'海洋学', 14)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (144, N'自然地理学', 14)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (145, N'生物科学的理论与方法', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (146, N'生物科学现状与发展', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (147, N'生物科学的研究方法与技术', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (148, N'生物科学教育与普及', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (149, N'生物资源调查', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (150, N'普通生物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (151, N'细胞生物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (152, N'遗传学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (153, N'生理学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (154, N'生物化学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (155, N'生物物理学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (156, N'分子生物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (157, N'生物工程学（生物技术）', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (158, N'环境生物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (159, N'古生物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (160, N'微生物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (161, N'植物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (162, N'动物学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (163, N'昆虫学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (164, N'人类学', 15)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (165, N'一般理论', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (166, N'现状与发展', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (167, N'医学研究方法', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (168, N'预防医学、卫生学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (169, N'中国医学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (170, N'基础医学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (171, N'临床医学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (172, N'内科学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (173, N'外科学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (174, N'妇产科学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (175, N'儿科学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (176, N'肿瘤学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (177, N'神经病学与精神病学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (178, N'皮肤病学与性病学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (179, N'耳鼻咽喉科学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (180, N'眼科学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (181, N'口腔科学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (182, N'外国民族医学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (183, N'特种医学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (184, N'药学', 16)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (185, N'一般性理论', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (186, N'农业科学技术现状与发展', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (187, N'农业科学研究、试验', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (188, N'农业经济', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (189, N'农业基础科学', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (190, N'农业工程', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (191, N'农学（农艺学）', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (192, N'植物保护', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (193, N'农作物', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (194, N'园艺', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (195, N'林业', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (196, N'畜牧、动物医学、狩猎、蚕、蜂', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (197, N'水产、渔业', 17)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (198, N'工业技术理论', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (199, N'工业技术现状与发展', 18)
GO
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (200, N'机构、团体、会议', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (201, N'参考工具书', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (202, N'工业经济', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (203, N'一般工业技术', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (204, N'矿业工程', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (205, N'石油、天然气工业', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (206, N'冶金工业', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (207, N'金属学与金属工艺', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (208, N'机械、仪表工业', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (209, N'武器工业', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (210, N'能源与动力工程', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (211, N'原子能技术', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (212, N'电工技术', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (213, N'无线电电子学、电信技术', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (214, N'自动化技术、计算机技术', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (215, N'化学工业', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (216, N'轻工业、手工业', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (217, N'建筑科学', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (218, N'水利工程', 18)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (219, N'交通运输经济', 19)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (220, N'综合运输', 19)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (221, N'铁路运输', 19)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (222, N'公路运输', 19)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (223, N'水路运输', 19)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (224, N'航空运输', 19)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (225, N'航空、航天技术的研究与探索', 20)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (226, N'航空', 20)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (227, N'航天（宇宙航行）', 20)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (228, N'航空、航天医学', 20)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (229, N'环境科学理论', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (230, N'环境科学技术现状与发展', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (231, N'环境保护宣传教育及普及', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (232, N'环境保护参考工具书', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (233, N'环境科学基础理论', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (234, N'社会与环境', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (235, N'环境保护管理', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (236, N'灾害及其防治', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (237, N'环境污染及其防治', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (238, N'废物处理与综合利用', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (239, N'环境质量评价与环境监测', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (240, N'安全科学', 21)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (241, N'丛书', 22)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (242, N'百科全书、类书', 22)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (243, N'辞典', 22)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (244, N'论文集、全集、选集、杂著', 22)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (245, N'年鉴、年刊', 22)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (246, N'期刊、连续性出版物', 22)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (247, N'图书目录、文摘、索引', 22)
INSERT [dbo].[TwoBook] ([twoNo], [twoName], [oneNo]) VALUES (248, N'其它', 23)
SET IDENTITY_INSERT [dbo].[TwoBook] OFF
INSERT [dbo].[UserInfo] ([Uno], [Uname], [Ujob], [Usex], [Uage], [Ubirthday], [DeptNo], [MajorNo], [ClassNo], [Uphone], [Uemail], [Uremarks], [Upwd], [Ustatus], [Ulasttime]) VALUES (N'0131122589', N'宋亚旭', N'学生', N'男', 22, N'1995/12/23', N'G9', N'I1', N'2013-1', N'132323', NULL, NULL, N'0000', 11, N'2017-4-12')
SET ANSI_PADDING ON

GO
/****** Object:  Index [index_ISBN]    Script Date: 2017/4/12 17:02:30 ******/
CREATE UNIQUE NONCLUSTERED INDEX [index_ISBN] ON [dbo].[Book]
(
	[ISBN] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, SORT_IN_TEMPDB = OFF, IGNORE_DUP_KEY = OFF, DROP_EXISTING = OFF, ONLINE = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
GO
SET ANSI_PADDING ON

GO
/****** Object:  Index [index_Uno]    Script Date: 2017/4/12 17:02:30 ******/
CREATE UNIQUE NONCLUSTERED INDEX [index_Uno] ON [dbo].[UserInfo]
(
	[Uno] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, SORT_IN_TEMPDB = OFF, IGNORE_DUP_KEY = OFF, DROP_EXISTING = OFF, ONLINE = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
GO
ALTER TABLE [dbo].[UserInfo] ADD  CONSTRAINT [DF_UserInfo_Upwd]  DEFAULT (N'0000') FOR [Upwd]
GO
ALTER TABLE [dbo].[UserInfo] ADD  CONSTRAINT [DF_UserInfo_Ustatus]  DEFAULT ((11)) FOR [Ustatus]
GO
USE [master]
GO
ALTER DATABASE [lms] SET  READ_WRITE 
GO
