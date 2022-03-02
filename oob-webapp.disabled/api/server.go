package main

import (
	"x8-oob/routes"
	"x8-oob/wsssh"

	"github.com/labstack/echo/v4"
	"github.com/labstack/echo/v4/middleware"
)

func main() {
	e := echo.New()
	e.Use(middleware.Logger())

	e.Use(middleware.Static("webapp/dist"))

	e.GET("/api/board", routes.ReadBoard)
	e.GET("/api/board/hostname", routes.ReadHostname)
	e.PUT("/api/board/hostname", routes.UpdateHostname)

	e.GET("/api/wlan/networks", routes.ReadNetworkList)

	e.GET("/api/wlan/connection", routes.ReadConnection)
	e.PUT("/api/wlan/connection", routes.PostConnection)

	e.GET("/api/factory/name", routes.ReadFactoryName)
	e.POST("/api/factory/name", routes.CreateFactoryName)

	e.GET("/api/shell", wsssh.HandleWebsocket)

	e.Logger.Fatal(e.Start(":1323"))
}
