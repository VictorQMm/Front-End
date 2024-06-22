using System;
using System.Web.UI;

namespace MeuSite
{
    public class Default : Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Response.Write("Meu site está rodando!");
        }
    }
}