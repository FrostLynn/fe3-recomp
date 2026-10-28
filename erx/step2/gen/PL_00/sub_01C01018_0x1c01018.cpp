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

// Function: sub_01C01018
// Address: 0x1c01018 - 0x1c01088
void sub_01C01018_0x1c01018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01018_0x1c01018");
#endif

    switch (ctx->pc) {
        case 0x1c0103cu: goto label_1c0103c;
        case 0x1c0104cu: goto label_1c0104c;
        case 0x1c01058u: goto label_1c01058;
        case 0x1c01068u: goto label_1c01068;
        default: break;
    }

    ctx->pc = 0x1c01018u;

    // 0x1c01018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c01018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0101c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c01020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c01020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c01024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c01024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c01028: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c01028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0102c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c0102cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c01030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c01030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01034: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C01034u;
    SET_GPR_U32(ctx, 31, 0x1C0103Cu);
    ctx->pc = 0x1C01038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01034u;
    // 0x1c01038: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C01034u, 0x1C0103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0103Cu;
label_1c0103c:
    // 0x1c0103c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c0103cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c01040: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c01040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c01044: 0xc7002cc  jal         func_1C00B30
    ctx->pc = 0x1C01044u;
    SET_GPR_U32(ctx, 31, 0x1C0104Cu);
    ctx->pc = 0x1C01048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01044u;
    // 0x1c01048: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00B30u, 0x1C01044u, 0x1C0104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0104Cu;
label_1c0104c:
    // 0x1c0104c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c0104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c01050: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C01050u;
    SET_GPR_U32(ctx, 31, 0x1C01058u);
    ctx->pc = 0x1C01054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01050u;
    // 0x1c01054: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C01050u, 0x1C01058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01058u;
label_1c01058:
    // 0x1c01058: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c01058u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c0105c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c0105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c01060: 0xc7002cc  jal         func_1C00B30
    ctx->pc = 0x1C01060u;
    SET_GPR_U32(ctx, 31, 0x1C01068u);
    ctx->pc = 0x1C01064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01060u;
    // 0x1c01064: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00B30u, 0x1C01060u, 0x1C01068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01068u;
label_1c01068:
    // 0x1c01068: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c01068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c0106c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c01070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c01074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c01078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0107c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0107cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01080: 0x870002c  j           func_1C000B0
    ctx->pc = 0x1C01080u;
    ctx->pc = 0x1C01084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01080u;
    // 0x1c01084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C000B0u;
    sub_01C000B0_0x1c000b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01088u;
}
