USE [lms]
GO

/****** Object:  Table [dbo].[Punish]    Script Date: 2017/4/12 14:14:49 ******/
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


