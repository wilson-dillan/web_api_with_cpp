#include "CalcResourceFactory.h"
#include "CalcServiceSettingsFactory.h"
#include "CalcService.h"

int main(const int, const char**)
{
  auto resource_factory = make_shared<CalcResourceFactory>();
  auto settings_factory = make_shared<CalcServiceSettingsFactory>();
  CalcService service {resource_factory, settings_factory};
  service.start();
  
  return EXIT_SUCCESS;
}