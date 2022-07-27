using UnityEngine;
using System.IO;
using ClosedXML.Excel;
using System;
using System.Collections.Generic;

public class ExelAnalytic: MonoBehaviour
{
    [SerializeField] private string _fileName = "Analytic";
    [SerializeField] private List<float> _moneyCollet = new List<float>();
    private float _moneyCountInStart;
    private XLWorkbook _workbook;
    private IXLWorksheet _worksheet;

    private void OnEnable()
    {
        _workbook = new XLWorkbook();
        _workbook.Worksheets.Add("Stats");
        _worksheet = _workbook.Worksheets.Worksheet("Stats");
        _worksheet.Cell(1, 3).SetValue("MoneyPay");
        _worksheet.Cell(1, 2).SetValue("MoneyAded");
        _worksheet.Cell(1, 1).SetValue("TotalMoney");
#if UNITY_EDITOR
        _fileName = Path.Combine(Application.dataPath, "Export", "Data.xlsx");
#else
        _fileName = Path.Combine(Application.persistentDataPath, "Export", "Data.xlsx");
#endif
        Wallet.Instance.OnMoneyChange += AddMoney;
        _moneyCountInStart = Wallet.Instance.Count;
    }

    private void AddMoney(float money) 
    {
        _moneyCollet.Add(money);
    }

    private void OnApplicationQuit()
    {
        for(int i = 1; i < _moneyCollet.Count; i++) 
        {
            _worksheet.Cell(i + 1, 1).SetValue(_moneyCollet[i - 1]);
            if((_moneyCollet[i - 1] - _moneyCountInStart) < 0)
                _worksheet.Cell(i + 1, 2).SetValue(_moneyCollet[i - 1] - _moneyCountInStart);
            else
                _worksheet.Cell(i + 1, 3).SetValue(_moneyCollet[i - 1] - _moneyCountInStart);
        }
        _workbook.SaveAs(_fileName);
    }

}
