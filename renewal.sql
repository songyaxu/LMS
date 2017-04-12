USE [lms]
GO

/****** Object:  Table [dbo].[Renewal]    Script Date: 2017/4/12 14:15:01 ******/
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


