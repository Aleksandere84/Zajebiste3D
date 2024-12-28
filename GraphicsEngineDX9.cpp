#include "GraphicsEngineDX9.h"

GraphicsEngineDX9::GraphicsEngineDX9()
{
}

GraphicsEngineDX9::~GraphicsEngineDX9()
{
}

bool GraphicsEngineDX9::init(HWND hwnd)
{
    m_Direct3D = Direct3DCreate9(D3D_SDK_VERSION);

    D3DPRESENT_PARAMETERS d3dPresentParameters = { 0 };
    
    d3dPresentParameters.Windowed = TRUE;
    d3dPresentParameters.SwapEffect = D3DSWAPEFFECT_DISCARD;
    d3dPresentParameters.hDeviceWindow = this->m_hwnd;

   
    
    if (m_Direct3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, this->m_hwnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dPresentParameters, &this->m_d3dDevice) != D3D_OK)
    {
        return false;
    }
    return true;
}

void GraphicsEngineDX9::renderFrame()
{
    this->m_d3dDevice->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_XRGB(0, 40, 100), 1.0f, 0);

    this->m_d3dDevice->BeginScene();

    /* TODO: rendering */

    this->m_d3dDevice->EndScene();
    this->m_d3dDevice->Present(NULL, NULL, NULL, NULL);
}

bool GraphicsEngineDX9::release()
{
    this->m_d3dDevice->Release();
    return true;
}
