USE [lms]
GO

/****** Object:  Table [dbo].[Class]    Script Date: 2017/4/12 14:13:57 ******/
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


