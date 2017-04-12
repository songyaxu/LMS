USE [lms]
GO

/****** Object:  Table [dbo].[UserInfo]    Script Date: 2017/4/12 14:15:25 ******/
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

ALTER TABLE [dbo].[UserInfo] ADD  CONSTRAINT [DF_UserInfo_Upwd]  DEFAULT ((0)) FOR [Upwd]
GO


