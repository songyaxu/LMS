USE [lms]
GO

/****** Object:  Table [dbo].[TwoBook]    Script Date: 2017/4/12 14:15:13 ******/
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


