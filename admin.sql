USE [lms]
GO

/****** Object:  Table [dbo].[Admin]    Script Date: 2017/4/12 14:13:06 ******/
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

