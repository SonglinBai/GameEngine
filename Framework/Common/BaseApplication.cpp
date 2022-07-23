#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int My::BaseApplicion::Initialize()
{
    m_bQuit = false;

    return 0;
}

// Finalize all sub modules and clean up all runtime temporary files
void My::BaseApplicion::Finalize()
{
}

// One cycle of the main loop
void My::BaseApplicion::Tick()
{}

bool My::BaseApplicion::IsQuit()
{
    return m_bQuit;
}
