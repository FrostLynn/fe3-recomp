#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D52ADC
// Address: 0x1d52adc - 0x1d52b68
void sub_01D52ADC_0x1d52adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D52ADC_0x1d52adc");
#endif

    switch (ctx->pc) {
        case 0x1d52aecu: goto label_1d52aec;
        case 0x1d52afcu: goto label_1d52afc;
        case 0x1d52b0cu: goto label_1d52b0c;
        case 0x1d52b1cu: goto label_1d52b1c;
        case 0x1d52b2cu: goto label_1d52b2c;
        case 0x1d52b3cu: goto label_1d52b3c;
        default: break;
    }

    ctx->pc = 0x1d52adcu;

    // 0x1d52adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ae4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D52AE4u;
    {
        const bool branch_taken_0x1d52ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52AE4u;
        // 0x1d52ae8: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52ae4) {
            ctx->pc = 0x1D52A70u;
            return;
        }
    }
    ctx->pc = 0x1D52AECu;
label_1d52aec:
    // 0x1d52aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52af4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D52AF4u;
    {
        const bool branch_taken_0x1d52af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52AF4u;
        // 0x1d52af8: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52af4) {
            ctx->pc = 0x1D52A70u;
            return;
        }
    }
    ctx->pc = 0x1D52AFCu;
label_1d52afc:
    // 0x1d52afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b04: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D52B04u;
    {
        const bool branch_taken_0x1d52b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B04u;
        // 0x1d52b08: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b04) {
            ctx->pc = 0x1D52A70u;
            return;
        }
    }
    ctx->pc = 0x1D52B0Cu;
label_1d52b0c:
    // 0x1d52b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b14: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D52B14u;
    {
        const bool branch_taken_0x1d52b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B14u;
        // 0x1d52b18: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b14) {
            ctx->pc = 0x1D52A70u;
            return;
        }
    }
    ctx->pc = 0x1D52B1Cu;
label_1d52b1c:
    // 0x1d52b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b24: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D52B24u;
    {
        const bool branch_taken_0x1d52b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B24u;
        // 0x1d52b28: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b24) {
            ctx->pc = 0x1D52A70u;
            return;
        }
    }
    ctx->pc = 0x1D52B2Cu;
label_1d52b2c:
    // 0x1d52b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b34: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1D52B34u;
    {
        const bool branch_taken_0x1d52b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B34u;
        // 0x1d52b38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b34) {
            ctx->pc = 0x1D52A70u;
            return;
        }
    }
    ctx->pc = 0x1D52B3Cu;
label_1d52b3c:
    // 0x1d52b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52b44: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1D52B44u;
    {
        const bool branch_taken_0x1d52b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B44u;
        // 0x1d52b48: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b44) {
            ctx->pc = 0x1D52A70u;
            return;
        }
    }
    ctx->pc = 0x1D52B4Cu;
    // 0x1d52b4c: 0x0  nop
    ctx->pc = 0x1d52b4cu;
    // NOP
    // 0x1d52b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d52b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d52b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d52b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52b5c: 0x87543e0  j           func_1D50F80
    ctx->pc = 0x1D52B5Cu;
    ctx->pc = 0x1D52B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52B5Cu;
    // 0x1d52b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F80u;
    sub_01D50F80_0x1d50f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52B64u;
    // 0x1d52b64: 0x0  nop
    ctx->pc = 0x1d52b64u;
    // NOP
    ctx->pc = 0x1d52b68u;
}
