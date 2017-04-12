USE [lms]
GO

/****** Object:  Table [dbo].[Book]    Script Date: 2017/4/12 14:13:13 ******/
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


