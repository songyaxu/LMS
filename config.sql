USE [lms]
GO

/****** Object:  Table [dbo].[Config]    Script Date: 2017/4/12 14:14:10 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[Config](
	[Cid] [int] NULL,
	[Cname] [nvarchar](50) NULL,
	[MaxNum] [int] NULL,
	[Time] [int] NULL,
	[Punish] [int] NULL,
	[SameNum] [int] NULL
) ON [PRIMARY]

GO


