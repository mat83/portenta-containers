import React from "react";
import ReactDOM from "react-dom";
import "./index.css";
import { QueryClientProvider } from "react-query";
import { BrowserRouter } from "react-router-dom";
import CssBaseline from "@mui/material/CssBaseline";
import { ThemeProvider } from "@mui/material/styles";
import App from "./App";
import { queryClient } from "./queryClient";
import { arduinoProTheme } from "./theme";

ReactDOM.render(
  <React.StrictMode>
    <ThemeProvider theme={arduinoProTheme}>
      <CssBaseline />
      <BrowserRouter>
        <QueryClientProvider client={queryClient}>
          <App />
        </QueryClientProvider>
      </BrowserRouter>
      ,
    </ThemeProvider>
  </React.StrictMode>,
  document.getElementById("root")
);
