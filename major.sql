USE [lms]
GO

/****** Object:  Table [dbo].[Major]    Script Date: 2017/4/12 14:14:36 ******/
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


